
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_channel {TYPE_1__* iob; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qeth_channel *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, 2, "freech");
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_2->iob[VAR_3].data);
}
