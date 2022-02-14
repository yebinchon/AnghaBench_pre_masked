
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int vframes_dumped; scalar_t__ vframe_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pwc_device *VAR_1)
{
 VAR_1->vframes_dumped++;
 if (VAR_1->vframe_count < VAR_0)
  return;

 if (VAR_1->vframes_dumped < 20)
  FUNC_0("Dumping frame %d\n", VAR_1->vframe_count);
 else if (VAR_1->vframes_dumped == 20)
  FUNC_0("Dumping frame %d (last message)\n",
    VAR_1->vframe_count);
}
