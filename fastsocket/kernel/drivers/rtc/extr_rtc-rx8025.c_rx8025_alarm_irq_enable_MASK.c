
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx8025_data {int ctrl1; int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rx8025_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned int VAR_3)
{
 struct rx8025_data *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->ctrl1;
 if (VAR_3)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;

 if (VAR_5 != VAR_4->ctrl1) {
  VAR_4->ctrl1 = VAR_5;
  VAR_6 = FUNC_1(VAR_4->client, VAR_1,
           VAR_4->ctrl1);
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
