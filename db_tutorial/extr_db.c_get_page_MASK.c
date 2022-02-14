
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ssize_t ;
struct TYPE_3__ {void** pages; int file_length; int num_pages; int file_descriptor; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ,void*,int) ;

void* FUNC_5(Pager* VAR_5, uint32_t VAR_6) {
  if (VAR_6 > VAR_3) {
    FUNC_3("Tried to fetch page number out of bounds. %d > %d\n", VAR_6,
           VAR_3);
    FUNC_0(VAR_0);
  }

  if (VAR_5->pages[VAR_6] == ((void*)0)) {

    void* VAR_7 = FUNC_2(VAR_1);
    uint32_t VAR_8 = VAR_5->file_length / VAR_1;


    if (VAR_5->file_length % VAR_1) {
      VAR_8 += 1;
    }

    if (VAR_6 <= VAR_8) {
      FUNC_1(VAR_5->file_descriptor, VAR_6 * VAR_1, VAR_2);
      ssize_t VAR_9 = FUNC_4(VAR_5->file_descriptor, VAR_7, VAR_1);
      if (VAR_9 == -1) {
        FUNC_3("Error reading file: %d\n", VAR_4);
        FUNC_0(VAR_0);
      }
    }

    VAR_5->pages[VAR_6] = VAR_7;

    if (VAR_6 >= VAR_5->num_pages) {
      VAR_5->num_pages = VAR_6 + 1;
    }
  }

  return VAR_5->pages[VAR_6];
}
