
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct request_context {int dummy; } ;
struct hermes {struct ezusb_priv* priv; } ;
struct ezusb_priv {int dummy; } ;
typedef int data ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ezusb_priv*,struct request_context*,int,int *,int ,int *,int ,int *) ;
 struct request_context* FUNC_2 (struct ezusb_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hermes *VAR_4, u32 VAR_5)
{
 struct ezusb_priv *VAR_6 = VAR_4->priv;
 struct request_context *VAR_7;
 __le32 VAR_8 = FUNC_0(VAR_5);

 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_2);
 if (!VAR_7)
  return -VAR_0;

 return FUNC_1(VAR_6, VAR_7, sizeof(VAR_8), &VAR_8,
    VAR_1, ((void*)0), 0, ((void*)0));
}
