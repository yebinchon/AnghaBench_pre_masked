
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop_device {int lo_offset; scalar_t__ lo_sizelimit; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static loff_t FUNC_1(struct loop_device *VAR_0, struct file *VAR_1)
{
 loff_t VAR_2, VAR_3, VAR_4;


 VAR_2 = FUNC_0(VAR_1->f_mapping->host);
 VAR_3 = VAR_0->lo_offset;
 VAR_4 = VAR_2 - VAR_3;
 if (VAR_0->lo_sizelimit > 0 && VAR_0->lo_sizelimit < VAR_4)
  VAR_4 = VAR_0->lo_sizelimit;





 return VAR_4 >> 9;
}
