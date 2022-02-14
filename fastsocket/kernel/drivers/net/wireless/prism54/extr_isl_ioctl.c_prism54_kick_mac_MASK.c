
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct obj_mlme {int id; int address; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct obj_mlme*) ;
 struct obj_mlme* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,struct obj_mlme*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_6, struct iw_request_info *VAR_7,
   struct sockaddr *VAR_8, char *VAR_9)
{
 struct obj_mlme *VAR_10;
 struct sockaddr *VAR_11 = (struct sockaddr *) VAR_9;
 int VAR_12;

 if (VAR_11->sa_family != VAR_0)
  return -VAR_3;

 VAR_10 = FUNC_1(sizeof (struct obj_mlme), VAR_5);
 if (VAR_10 == ((void*)0))
  return -VAR_2;


 FUNC_2(VAR_10->address, VAR_11->sa_data, VAR_4);
 VAR_10->id = -1;
 VAR_12 =
     FUNC_3(FUNC_4(VAR_6), VAR_1, 0, VAR_10);

 FUNC_0(VAR_10);

 return VAR_12;
}
