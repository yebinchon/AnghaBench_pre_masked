
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fore200e {TYPE_1__** host_bsq; } ;
struct chunk {int * alloc_addr; } ;
struct buffer {struct chunk data; } ;
struct TYPE_2__ {struct buffer* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fore200e*,struct chunk*) ;
 int** VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct fore200e* VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    struct buffer* VAR_7;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

     if ((VAR_7 = VAR_3->host_bsq[ VAR_4 ][ VAR_5 ].buffer) != ((void*)0)) {

  for (VAR_6 = 0; VAR_6 < VAR_2[ VAR_4 ][ VAR_5 ]; VAR_6++) {

      struct chunk* VAR_8 = &VAR_7[ VAR_6 ].data;

      if (VAR_8->alloc_addr != ((void*)0))
   FUNC_0(VAR_3, VAR_8);
  }
     }
 }
    }
}
