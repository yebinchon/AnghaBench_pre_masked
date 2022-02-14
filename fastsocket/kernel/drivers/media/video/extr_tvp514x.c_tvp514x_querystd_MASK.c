
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {int input; int current_std; TYPE_2__* std_list; } ;
typedef enum tvp514x_std { ____Placeholder_tvp514x_std } tvp514x_std ;
typedef enum tvp514x_input { ____Placeholder_tvp514x_input } tvp514x_input ;
struct TYPE_3__ {int name; int id; } ;
struct TYPE_4__ {TYPE_1__ standard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_7, v4l2_std_id *VAR_8)
{
 struct tvp514x_decoder *VAR_9 = FUNC_0(VAR_7);
 enum tvp514x_std VAR_10;
 enum tvp514x_input VAR_11;
 u8 VAR_12, VAR_13;

 if (VAR_8 == ((void*)0))
  return -VAR_0;


 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10 == VAR_5)
  return -VAR_0;

 VAR_11 = VAR_9->input;

 switch (VAR_11) {
 case 149:
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
  VAR_13 = VAR_2 |
   VAR_3 |
   VAR_4;
  break;

 case 139:
 case 137:
 case 135:
 case 138:
 case 136:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_13 = VAR_3 |
   VAR_4;
  break;

 default:
  return -VAR_0;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_1);
 if (VAR_13 != (VAR_12 & VAR_13))
  return -VAR_0;

 VAR_9->current_std = VAR_10;
 *VAR_8 = VAR_9->std_list[VAR_10].standard.id;

 FUNC_3(1, VAR_6, VAR_7, "Current STD: %s",
   VAR_9->std_list[VAR_10].standard.name);
 return 0;
}
