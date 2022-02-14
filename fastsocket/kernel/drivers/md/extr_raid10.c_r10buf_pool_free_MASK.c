
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r10conf {int copies; } ;
struct r10bio {TYPE_2__* devs; } ;
struct bio {TYPE_1__* bi_io_vec; } ;
struct TYPE_4__ {struct bio* repl_bio; struct bio* bio; } ;
struct TYPE_3__ {int * bv_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct r10bio*,struct r10conf*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct r10conf *VAR_4 = VAR_2;
 struct r10bio *VAR_5 = VAR_1;
 int VAR_6;

 for (VAR_6=0; VAR_6 < VAR_4->copies; VAR_6++) {
  struct bio *VAR_7 = VAR_5->devs[VAR_6].bio;
  if (VAR_7) {
   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    FUNC_2(VAR_7->bi_io_vec[VAR_3].bv_page);
    VAR_7->bi_io_vec[VAR_3].bv_page = ((void*)0);
   }
   FUNC_0(VAR_7);
  }
  VAR_7 = VAR_5->devs[VAR_6].repl_bio;
  if (VAR_7)
   FUNC_0(VAR_7);
 }
 FUNC_1(VAR_5, VAR_4);
}
