
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_standard {scalar_t__ id; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct hexium {scalar_t__ cur_std; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hexium*,int ) ;

__attribute__((used)) static int FUNC_1(struct saa7146_dev *VAR_6, struct saa7146_standard *VAR_7)
{
 struct hexium *VAR_8 = (struct hexium *) VAR_6->ext_priv;

 if (VAR_1 == VAR_7->id) {
  FUNC_0(VAR_8, VAR_4);
  VAR_8->cur_std = VAR_1;
  return 0;
 } else if (VAR_0 == VAR_7->id) {
  FUNC_0(VAR_8, VAR_3);
  VAR_8->cur_std = VAR_0;
  return 0;
 } else if (VAR_2 == VAR_7->id) {
  FUNC_0(VAR_8, VAR_5);
  VAR_8->cur_std = VAR_2;
  return 0;
 }

 return -1;
}
