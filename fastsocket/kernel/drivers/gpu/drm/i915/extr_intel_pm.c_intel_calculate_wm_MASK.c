
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_watermark_params {long guard_size; long max_wm; long default_wm; int cacheline_size; } ;


 long FUNC_0 (long,int ) ;
 int FUNC_1 (char*,long) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_0,
     const struct intel_watermark_params *VAR_1,
     int VAR_2,
     int VAR_3,
     unsigned long VAR_4)
{
 long VAR_5, VAR_6;







 VAR_5 = ((VAR_0 / 1000) * VAR_3 * VAR_4) /
  1000;
 VAR_5 = FUNC_0(VAR_5, VAR_1->cacheline_size);

 FUNC_1("FIFO entries required for mode: %ld\n", VAR_5);

 VAR_6 = VAR_2 - (VAR_5 + VAR_1->guard_size);

 FUNC_1("FIFO watermark level: %ld\n", VAR_6);


 if (VAR_6 > (long)VAR_1->max_wm)
  VAR_6 = VAR_1->max_wm;
 if (VAR_6 <= 0)
  VAR_6 = VAR_1->default_wm;
 return VAR_6;
}
