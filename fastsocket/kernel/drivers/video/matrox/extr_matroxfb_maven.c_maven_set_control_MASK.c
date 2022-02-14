
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {int id; scalar_t__ value; } ;
struct maven_gamma {unsigned char reg83; unsigned char reg84; unsigned char reg85; unsigned char reg86; unsigned char reg87; unsigned char reg88; unsigned char reg89; unsigned char reg8a; unsigned char reg8b; } ;
struct maven_data {int client; } ;
struct TYPE_3__ {scalar_t__ maximum; scalar_t__ minimum; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;







 int FUNC_0 (int) ;
 scalar_t__* FUNC_1 (struct maven_data*,int) ;
 int FUNC_2 (struct maven_data*,int*,int*) ;
 unsigned char FUNC_3 (struct maven_data*) ;
 struct maven_gamma* FUNC_4 (struct maven_data*) ;
 TYPE_2__* VAR_1 ;
 unsigned char FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,unsigned char) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8 (struct maven_data* VAR_2,
         struct v4l2_control *VAR_3) {
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->id);
 if (VAR_4 < 0) return -VAR_0;




 if (VAR_3->value == *FUNC_1(VAR_2, VAR_4)) return 0;




 if (VAR_3->value > VAR_1[VAR_4].desc.maximum) return -VAR_0;
 if (VAR_3->value < VAR_1[VAR_4].desc.minimum) return -VAR_0;




 *FUNC_1(VAR_2, VAR_4) = VAR_3->value;

 switch (VAR_3->id) {
  case 132:
  case 131:
  {
    int VAR_5, VAR_6;
    FUNC_2(VAR_2, &VAR_5, &VAR_6);
    VAR_5 = (VAR_5 >> 2) | ((VAR_5 & 3) << 8);
    VAR_6 = (VAR_6 >> 2) | ((VAR_6 & 3) << 8);
    FUNC_7(VAR_2->client, 0x0e, VAR_5);
    FUNC_7(VAR_2->client, 0x1e, VAR_6);
  }
  break;
  case 128:
  {
    FUNC_6(VAR_2->client, 0x20, VAR_3->value);
    FUNC_6(VAR_2->client, 0x22, VAR_3->value);
  }
  break;
  case 129:
  {
    FUNC_6(VAR_2->client, 0x25, VAR_3->value);
  }
  break;
  case 130:
  {
    const struct maven_gamma* VAR_7;
    VAR_7 = FUNC_4(VAR_2);
    FUNC_6(VAR_2->client, 0x83, VAR_7->reg83);
    FUNC_6(VAR_2->client, 0x84, VAR_7->reg84);
    FUNC_6(VAR_2->client, 0x85, VAR_7->reg85);
    FUNC_6(VAR_2->client, 0x86, VAR_7->reg86);
    FUNC_6(VAR_2->client, 0x87, VAR_7->reg87);
    FUNC_6(VAR_2->client, 0x88, VAR_7->reg88);
    FUNC_6(VAR_2->client, 0x89, VAR_7->reg89);
    FUNC_6(VAR_2->client, 0x8a, VAR_7->reg8a);
    FUNC_6(VAR_2->client, 0x8b, VAR_7->reg8b);
  }
  break;
  case 133:
  {
   unsigned char VAR_8
     = FUNC_5(VAR_2->client, 0x8d);
   if (VAR_3->value) VAR_8 |= 0x10;
   else VAR_8 &= ~0x10;
   FUNC_6(VAR_2->client, 0x8d, VAR_8);
  }
  break;
  case 134:
  {
    FUNC_6(VAR_2->client, 0x93, FUNC_3(VAR_2));
  }
  break;
 }


 return 0;
}
