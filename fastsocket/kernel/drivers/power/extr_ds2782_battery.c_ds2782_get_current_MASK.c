
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ds2782_info {TYPE_1__* client; } ;
typedef int s16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ds2782_info*,int ,int*) ;
 int FUNC_3 (struct ds2782_info*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct ds2782_info *VAR_4, int *VAR_5)
{
 int VAR_6;
 int VAR_7;
 u8 VAR_8;
 s16 VAR_9;





 VAR_7 = FUNC_2(VAR_4, VAR_2, &VAR_8);
 if (VAR_7)
  return VAR_7;
 if (VAR_8 == 0) {
  FUNC_1(&VAR_4->client->dev, "sense resistor value is 0\n");
  return -VAR_3;
 }
 VAR_6 = 1000 / VAR_8;

 FUNC_0(&VAR_4->client->dev, "sense resistor = %d milli-ohms\n",
  VAR_6);
 VAR_7 = FUNC_3(VAR_4, VAR_1, &VAR_9);
 if (VAR_7)
  return VAR_7;
 *VAR_5 = VAR_9 * (VAR_0 / VAR_6);
 return 0;
}
