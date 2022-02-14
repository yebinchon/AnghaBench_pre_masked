
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {int ch; } ;
struct channel_req {scalar_t__ protocol; int * ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct layer2* FUNC_0 (int *,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct channel_req *VAR_4)
{
 struct layer2 *VAR_5;

 if (VAR_4->protocol != VAR_3)
  return -VAR_1;
 VAR_5 = FUNC_0(VAR_4->ch, VAR_4->protocol, 0, 0, 0);
 if (!VAR_5)
  return -VAR_0;
 VAR_4->ch = &VAR_5->ch;
 VAR_4->protocol = VAR_2;
 return 0;
}
