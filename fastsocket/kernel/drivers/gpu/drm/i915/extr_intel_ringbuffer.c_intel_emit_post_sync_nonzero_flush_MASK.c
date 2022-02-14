
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pipe_control {int gtt_offset; } ;
struct intel_ring_buffer {struct pipe_control* private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct intel_ring_buffer*) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;
 int FUNC_3 (struct intel_ring_buffer*,int) ;

__attribute__((used)) static int
FUNC_4(struct intel_ring_buffer *VAR_5)
{
 struct pipe_control *VAR_6 = VAR_5->private;
 u32 VAR_7 = VAR_6->gtt_offset + 128;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_5, 6);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_5, FUNC_0(5));
 FUNC_3(VAR_5, VAR_1 |
   VAR_4);
 FUNC_3(VAR_5, VAR_7 | VAR_2);
 FUNC_3(VAR_5, 0);
 FUNC_3(VAR_5, 0);
 FUNC_3(VAR_5, VAR_0);
 FUNC_1(VAR_5);

 VAR_8 = FUNC_2(VAR_5, 6);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_5, FUNC_0(5));
 FUNC_3(VAR_5, VAR_3);
 FUNC_3(VAR_5, VAR_7 | VAR_2);
 FUNC_3(VAR_5, 0);
 FUNC_3(VAR_5, 0);
 FUNC_3(VAR_5, VAR_0);
 FUNC_1(VAR_5);

 return 0;
}
