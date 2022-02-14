
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct solos_card {TYPE_2__** atmdev; TYPE_1__* dev; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int link_rate; int signal; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 char* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,char**,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct solos_card *VAR_4, int VAR_5, struct sk_buff *VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (!VAR_4->atmdev[VAR_5])
  return -VAR_3;

 VAR_7 = FUNC_3(VAR_6);
 if (!VAR_7)
  return -VAR_2;

 VAR_12 = FUNC_5(VAR_7, ((void*)0), 10);
 if (VAR_12 < 1) {
  FUNC_2(&VAR_4->dev->dev, "Unexpected status interrupt version %d\n",
    VAR_12);
  return -VAR_2;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (!VAR_7)
  return -VAR_2;
 if (!FUNC_6(VAR_7, "ERROR")) {
  FUNC_0(&VAR_4->dev->dev, "Status packet indicated Solos error on port %d (starting up?)\n",
    VAR_5);
  return 0;
 }

 VAR_14 = FUNC_5(VAR_7, &VAR_8, 10);
 if (*VAR_8)
  return -VAR_2;

 VAR_7 = FUNC_3(VAR_6);
 if (!VAR_7)
  return -VAR_2;
 VAR_13 = FUNC_5(VAR_7, &VAR_8, 10);
 if (*VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_3(VAR_6);
 if (!VAR_9)
  return -VAR_2;


 if (FUNC_6(VAR_9, "Showtime")) {
  VAR_4->atmdev[VAR_5]->signal = VAR_1;
  FUNC_4(VAR_4->atmdev[VAR_5]);
  FUNC_1(&VAR_4->dev->dev, "Port %d: %s\n", VAR_5, VAR_9);
  return 0;
 }

 VAR_10 = FUNC_3(VAR_6);
 if (!VAR_10)
  return -VAR_2;
 VAR_11 = FUNC_3(VAR_6);
 if (!VAR_11)
  return -VAR_2;

 FUNC_1(&VAR_4->dev->dev, "Port %d: %s @%d/%d kb/s%s%s%s%s\n",
   VAR_5, VAR_9, VAR_14/1000, VAR_13/1000,
   VAR_10[0]?", SNR ":"", VAR_10, VAR_11[0]?", Attn ":"", VAR_11);

 VAR_4->atmdev[VAR_5]->link_rate = VAR_14 / 424;
 VAR_4->atmdev[VAR_5]->signal = VAR_0;

 return 0;
}
