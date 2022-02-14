
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct cx25821_dev {unsigned int _data_buf_phys_addr_ch2; int _isNTSC_ch2; } ;
typedef int __le32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (unsigned int) ;

__attribute__((used)) static __le32 *FUNC_1(struct cx25821_dev *VAR_8,
           __le32 * VAR_9, unsigned int VAR_10,
           unsigned int VAR_11, u32 VAR_12,
           unsigned int VAR_13,
           int VAR_14, int VAR_15)
{
 unsigned int VAR_16, VAR_17;
 int VAR_18 = VAR_11 * 2;

 *(VAR_9++) = FUNC_0(VAR_5 | VAR_12);

 if (VAR_7) {
  for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
   *(VAR_9++) = FUNC_0(VAR_3);
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  *(VAR_9++) = FUNC_0(VAR_4 | VAR_6 | VAR_2 | VAR_11);
  *(VAR_9++) = FUNC_0(VAR_8->_data_buf_phys_addr_ch2 + VAR_10);
  *(VAR_9++) = FUNC_0(0);

  if ((VAR_13 <= VAR_0)
      || (VAR_16 < (VAR_0 - 1))
      || !(VAR_8->_isNTSC_ch2)) {
   VAR_10 += VAR_18;
  }
 }

 return VAR_9;
}
