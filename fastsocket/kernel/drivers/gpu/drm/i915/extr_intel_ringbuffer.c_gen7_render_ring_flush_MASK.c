
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pipe_control {scalar_t__ gtt_offset; } ;
struct intel_ring_buffer {struct pipe_control* private; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct intel_ring_buffer*) ;
 int FUNC_2 (struct intel_ring_buffer*) ;
 int FUNC_3 (struct intel_ring_buffer*,int) ;
 int FUNC_4 (struct intel_ring_buffer*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct intel_ring_buffer *VAR_11,
         u32 VAR_12, u32 VAR_13)
{
 u32 VAR_14 = 0;
 struct pipe_control *VAR_15 = VAR_11->private;
 u32 VAR_16 = VAR_15->gtt_offset + 128;
 int VAR_17;
 VAR_14 |= VAR_1;





 if (VAR_13) {
  VAR_14 |= VAR_6;
  VAR_14 |= VAR_2;
 }
 if (VAR_12) {
  VAR_14 |= VAR_9;
  VAR_14 |= VAR_4;
  VAR_14 |= VAR_8;
  VAR_14 |= VAR_10;
  VAR_14 |= VAR_0;
  VAR_14 |= VAR_7;



  VAR_14 |= VAR_5;
  VAR_14 |= VAR_3;




  FUNC_1(VAR_11);
 }

 VAR_17 = FUNC_3(VAR_11, 4);
 if (VAR_17)
  return VAR_17;

 FUNC_4(VAR_11, FUNC_0(4));
 FUNC_4(VAR_11, VAR_14);
 FUNC_4(VAR_11, VAR_16);
 FUNC_4(VAR_11, 0);
 FUNC_2(VAR_11);

 return 0;
}
