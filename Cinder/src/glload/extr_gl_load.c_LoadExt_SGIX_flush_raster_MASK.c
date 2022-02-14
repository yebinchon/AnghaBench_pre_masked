
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLFLUSHRASTERSGIXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_1 = 0;
 VAR_0 = (PFNGLFLUSHRASTERSGIXPROC)FUNC_0("glFlushRasterSGIX");
 if(!VAR_0) ++VAR_1;
 return VAR_1;
}
