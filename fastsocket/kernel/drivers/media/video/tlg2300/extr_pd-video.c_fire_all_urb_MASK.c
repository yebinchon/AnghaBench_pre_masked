
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int is_streaming; int * urb_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct video_data *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->is_streaming = 1;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_1(VAR_2->urb_array[VAR_3], VAR_0);
  if (VAR_4)
   FUNC_0("(%d) failed: error %d", VAR_3, VAR_4);
 }
 return VAR_4;
}
