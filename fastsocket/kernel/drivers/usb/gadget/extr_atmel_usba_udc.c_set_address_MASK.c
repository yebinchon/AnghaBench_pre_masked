
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usba_udc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (struct usba_udc*,int ) ;
 int FUNC_3 (struct usba_udc*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct usba_udc *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_1, "setting address %u...\n", VAR_4);
 VAR_5 = FUNC_2(VAR_3, VAR_0);
 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_5);
 FUNC_3(VAR_3, VAR_0, VAR_5);
}
