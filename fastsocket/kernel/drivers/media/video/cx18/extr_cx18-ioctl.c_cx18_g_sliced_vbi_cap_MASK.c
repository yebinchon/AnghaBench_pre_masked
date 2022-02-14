
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_sliced_vbi_cap {scalar_t__ type; int service_set; int** service_lines; scalar_t__* reserved; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {scalar_t__ is_50hz; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
     struct v4l2_sliced_vbi_cap *VAR_6)
{
 struct cx18 *VAR_7 = ((struct cx18_open_id *)VAR_5)->cx;
 int VAR_8 = VAR_7->is_50hz ? VAR_3 : VAR_2;
 int VAR_9, VAR_10;

 if (VAR_6->type != VAR_1)
  return -VAR_0;

 VAR_6->service_set = 0;
 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < 24; VAR_10++) {
   if (FUNC_0(VAR_9, VAR_10, VAR_7->is_50hz)) {




    VAR_6->service_lines[VAR_9][VAR_10] = VAR_8;
    VAR_6->service_set |= VAR_8;
   } else
    VAR_6->service_lines[VAR_9][VAR_10] = 0;
  }
 }
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  VAR_6->reserved[VAR_9] = 0;
 return 0;
}
