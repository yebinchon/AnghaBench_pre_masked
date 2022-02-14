
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_rphy {int dummy; } ;
struct request_queue {struct sas_rphy* queuedata; } ;


 int FUNC_0 (struct sas_rphy*) ;
 int FUNC_1 (struct request_queue*,int ,struct sas_rphy*) ;

__attribute__((used)) static void FUNC_2(struct request_queue *VAR_0)
{
 struct sas_rphy *VAR_1 = VAR_0->queuedata;
 FUNC_1(VAR_0, FUNC_0(VAR_1), VAR_1);
}
