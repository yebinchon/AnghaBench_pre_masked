
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_response_struct {int data; } ;
struct chp_id {int dummy; } ;
struct channel_path_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chp_id,int ,int ,int ,int ,struct chsc_response_struct*) ;
 int FUNC_1 (struct chsc_response_struct*) ;
 struct chsc_response_struct* FUNC_2 (int,int ) ;
 int FUNC_3 (struct channel_path_desc*,int *,int) ;

int FUNC_4(struct chp_id VAR_2,
       struct channel_path_desc *VAR_3)
{
 struct chsc_response_struct *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_2, 0, 0, 0, 0, VAR_4);
 if (VAR_5)
  goto out_free;
 FUNC_3(VAR_3, &VAR_4->data, sizeof(*VAR_3));
out_free:
 FUNC_1(VAR_4);
 return VAR_5;
}
