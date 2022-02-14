
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned int,int,int ) ;
 void* FUNC_1 (unsigned int,int) ;

__attribute__((used)) static void *FUNC_2(unsigned VAR_4)
{
 void *VAR_5 = ((void*)0);

 if (VAR_4 < VAR_1)
  VAR_5 = FUNC_1(VAR_4, VAR_0 | VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_2);
 return VAR_5;
}
