
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_ipa_funcs { ____Placeholder_qeth_ipa_funcs } qeth_ipa_funcs ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int,int ,int,int ) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int,long,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_3,
  enum qeth_ipa_funcs VAR_4, __u16 VAR_5, long VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 struct qeth_cmd_buffer *VAR_9;

 FUNC_0(VAR_1, 4, "simassp4");
 if (VAR_6)
  VAR_8 = sizeof(__u32);
 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5,
           VAR_8, VAR_0);
 VAR_7 = FUNC_2(VAR_3, VAR_9, VAR_8, VAR_6,
       VAR_2, ((void*)0));
 return VAR_7;
}
