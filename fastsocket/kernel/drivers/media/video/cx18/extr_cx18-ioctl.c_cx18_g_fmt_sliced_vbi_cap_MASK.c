
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_sliced_vbi_format {int io_size; scalar_t__ service_set; scalar_t__* reserved; int service_lines; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;
struct TYPE_2__ {struct v4l2_sliced_vbi_format sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int sd_av; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_sliced_vbi_format*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,struct v4l2_sliced_vbi_format*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct cx18 *VAR_6 = ((struct cx18_open_id *)VAR_4)->cx;
 struct v4l2_sliced_vbi_format *VAR_7 = &VAR_5->fmt.sliced;


 VAR_7->reserved[0] = 0;
 VAR_7->reserved[1] = 0;
 VAR_7->io_size = sizeof(struct v4l2_sliced_vbi_data) * 36;
 FUNC_1(VAR_7->service_lines, 0, sizeof(VAR_7->service_lines));
 VAR_7->service_set = 0;






 if (FUNC_2(VAR_6->sd_av, VAR_2, VAR_1, &VAR_5->fmt.sliced))
  return -VAR_0;


 VAR_7->reserved[0] = 0;
 VAR_7->reserved[1] = 0;
 VAR_7->io_size = sizeof(struct v4l2_sliced_vbi_data) * 36;
 VAR_7->service_set = FUNC_0(VAR_7);
 return 0;
}
