
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int NDIS_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void**,int,char) ;

void *FUNC_2(UINT VAR_0)
{
 NDIS_STATUS VAR_1;
 void *VAR_2;
 if (VAR_0 == 0)
 {
  VAR_0 = 1;
 }


 VAR_1 = FUNC_1(&VAR_2, VAR_0, 'SETH');

 if (FUNC_0(VAR_1))
 {
  return ((void*)0);
 }

 return VAR_2;
}
