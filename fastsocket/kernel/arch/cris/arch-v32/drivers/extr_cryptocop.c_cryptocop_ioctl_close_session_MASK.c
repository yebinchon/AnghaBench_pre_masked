
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strcop_session_op {scalar_t__ ses_id; } ;
struct inode {int dummy; } ;
struct file {struct cryptocop_private* private_data; } ;
struct cryptocop_private {scalar_t__ sid; struct cryptocop_private* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct strcop_session_op*,int) ;
 int FUNC_3 (struct strcop_session_op*,struct strcop_session_op*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct file *VAR_4,
      unsigned int VAR_5, unsigned long VAR_6)
{
 struct cryptocop_private *VAR_7 = VAR_4->private_data;
 struct cryptocop_private *VAR_8 = ((void*)0);
 struct strcop_session_op *VAR_9 = (struct strcop_session_op *)VAR_6;
 struct strcop_session_op VAR_10;
 int VAR_11;

 FUNC_0(FUNC_5("cryptocop_ioctl_close_session\n"));

 if (!FUNC_2(VAR_2, VAR_9, sizeof(struct strcop_session_op)))
  return -VAR_0;
 VAR_11 = FUNC_3(&VAR_10, VAR_9, sizeof(struct strcop_session_op));
 if (VAR_11) return -VAR_0;

 while (VAR_7 && (VAR_7->sid != VAR_10.ses_id)) {
  VAR_8 = VAR_7;
  VAR_7 = VAR_7->next;
 }
 if (VAR_7){
  if (VAR_8){
   VAR_8->next = VAR_7->next;
  } else {
   VAR_4->private_data = VAR_7->next;
  }
  VAR_11 = FUNC_4(VAR_7->sid);
  if (VAR_11) return -VAR_0;
 } else {
  FUNC_1(FUNC_5("cryptocop_ioctl_close_session: session %lld not found\n", VAR_10.ses_id));
  return -VAR_1;
 }
 return 0;
}
