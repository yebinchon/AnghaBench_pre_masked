
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_channel {TYPE_1__* iob; } ;
struct TYPE_2__ {int * data; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct lcs_channel *VAR_2)
{
 int VAR_3;

 FUNC_0(2, VAR_1, "ichfree");
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_2->iob[VAR_3].data);
  VAR_2->iob[VAR_3].data = ((void*)0);
 }
}
