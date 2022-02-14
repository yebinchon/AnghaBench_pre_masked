
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mxcmci_host *VAR_4)
{
 int VAR_5;


 FUNC_0(VAR_2, VAR_4->base + VAR_1);
 FUNC_0(VAR_2 | VAR_3,
   VAR_4->base + VAR_1);

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_0(VAR_3, VAR_4->base + VAR_1);

 FUNC_0(0xff, VAR_4->base + VAR_0);
}
