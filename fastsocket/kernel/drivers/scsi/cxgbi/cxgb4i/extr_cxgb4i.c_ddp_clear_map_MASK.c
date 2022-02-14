
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_hba {int port_id; int cdev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int *,unsigned int,unsigned int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct cxgbi_hba *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_6, VAR_3 += VAR_6) {
  VAR_6 = VAR_4 - VAR_5;
  if (VAR_6 > VAR_0)
   VAR_6 = VAR_0;
  VAR_7 = FUNC_0(VAR_1->cdev, VAR_1->port_id, ((void*)0),
     VAR_3, VAR_6, ((void*)0), 0);
  if (VAR_7 < 0)
   break;
 }
}
