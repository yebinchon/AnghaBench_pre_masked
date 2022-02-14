
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_3__ {int ** pages; int file_descriptor; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int *,size_t) ;

void FUNC_4(Pager* VAR_4, uint32_t VAR_5) {
  if (VAR_4->pages[VAR_5] == ((void*)0)) {
    FUNC_2("Tried to flush null page\n");
    FUNC_0(VAR_0);
  }

  off_t VAR_6 = FUNC_1(VAR_4->file_descriptor, VAR_5 * VAR_1, VAR_2);

  if (VAR_6 == -1) {
    FUNC_2("Error seeking: %d\n", VAR_3);
    FUNC_0(VAR_0);
  }

  ssize_t VAR_7 =
      FUNC_3(VAR_4->file_descriptor, VAR_4->pages[VAR_5], VAR_1);

  if (VAR_7 == -1) {
    FUNC_2("Error writing: %d\n", VAR_3);
    FUNC_0(VAR_0);
  }
}
