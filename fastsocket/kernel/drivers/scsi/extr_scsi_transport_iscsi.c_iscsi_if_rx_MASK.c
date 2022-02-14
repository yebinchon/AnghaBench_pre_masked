
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sk_buff {scalar_t__ len; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_type; int nlmsg_seq; } ;
struct iscsi_uevent {scalar_t__ type; int iferror; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct iscsi_uevent* FUNC_1 (struct nlmsghdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,int ,int ,int ,struct iscsi_uevent*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct sk_buff *VAR_6)
{
 FUNC_5(&VAR_5);
 while (VAR_6->len >= FUNC_2(0)) {
  int VAR_7;
  uint32_t VAR_8;
  struct nlmsghdr *VAR_9;
  struct iscsi_uevent *VAR_10;
  uint32_t VAR_11;

  VAR_9 = FUNC_7(VAR_6);
  if (VAR_9->nlmsg_len < sizeof(*VAR_9) ||
      VAR_6->len < VAR_9->nlmsg_len) {
   break;
  }

  VAR_10 = FUNC_1(VAR_9);
  VAR_8 = FUNC_0(VAR_9->nlmsg_len);
  if (VAR_8 > VAR_6->len)
   VAR_8 = VAR_6->len;

  VAR_7 = FUNC_3(VAR_6, VAR_9, &VAR_11);
  if (VAR_7) {
   VAR_10->type = VAR_2;
   VAR_10->iferror = VAR_7;
  }
  do {






   if (VAR_10->type == VAR_4 && !VAR_7)
    break;
   if (VAR_10->type == VAR_3 && !VAR_7)
    break;
   VAR_7 = FUNC_4(VAR_11, VAR_9->nlmsg_seq,
    VAR_9->nlmsg_type, 0, 0, VAR_10, sizeof(*VAR_10));
  } while (VAR_7 < 0 && VAR_7 != -VAR_0 && VAR_7 != -VAR_1);
  FUNC_8(VAR_6, VAR_8);
 }
 FUNC_6(&VAR_5);
}
