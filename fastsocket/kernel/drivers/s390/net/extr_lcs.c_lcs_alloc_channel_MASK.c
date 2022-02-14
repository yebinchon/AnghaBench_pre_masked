
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_channel {TYPE_1__* iob; } ;
struct TYPE_2__ {int * data; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(struct lcs_channel *VAR_7)
{
 int VAR_8;

 FUNC_0(2, VAR_6, "ichalloc");
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {

  VAR_7->iob[VAR_8].data =
   FUNC_2(VAR_4, VAR_1 | VAR_2);
  if (VAR_7->iob[VAR_8].data == ((void*)0))
   break;
  VAR_7->iob[VAR_8].state = VAR_3;
 }
 if (VAR_8 < VAR_5) {

  FUNC_0(2, VAR_6, "echalloc");
  while (VAR_8-- > 0)
   FUNC_1(VAR_7->iob[VAR_8].data);
  return -VAR_0;
 }
 return 0;
}
