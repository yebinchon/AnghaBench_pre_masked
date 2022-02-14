
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct intel_ring_buffer*) ;
 int FUNC_2 (struct intel_ring_buffer*) ;
 int FUNC_3 (struct intel_ring_buffer*,int) ;
 int FUNC_4 (struct intel_ring_buffer*,int) ;

__attribute__((used)) static int
FUNC_5(struct intel_ring_buffer *VAR_11,
                         u32 VAR_12, u32 VAR_13)
{
 u32 VAR_14 = 0;
 struct pipe_control *VAR_15 = VAR_11->private;
 u32 VAR_16 = VAR_15->gtt_offset + 128;
 int VAR_17;


 VAR_17 = FUNC_1(VAR_11);
 if (VAR_17)
  return VAR_17;





 if (VAR_13) {
  VAR_14 |= VAR_6;
  VAR_14 |= VAR_2;




  VAR_14 |= VAR_1;
 }
 if (VAR_12) {
  VAR_14 |= VAR_9;
  VAR_14 |= VAR_4;
  VAR_14 |= VAR_8;
  VAR_14 |= VAR_10;
  VAR_14 |= VAR_0;
  VAR_14 |= VAR_7;



  VAR_14 |= VAR_5 | VAR_1;
 }

 VAR_17 = FUNC_3(VAR_11, 4);
 if (VAR_17)
  return VAR_17;

 FUNC_4(VAR_11, FUNC_0(4));
 FUNC_4(VAR_11, VAR_14);
 FUNC_4(VAR_11, VAR_16 | VAR_3);
 FUNC_4(VAR_11, 0);
 FUNC_2(VAR_11);

 return 0;
}
