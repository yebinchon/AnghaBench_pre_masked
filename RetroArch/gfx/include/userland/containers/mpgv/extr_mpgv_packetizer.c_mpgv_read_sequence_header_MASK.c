
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int int64_t ;
typedef int header ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_BYTESTREAM_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,size_t,int*,int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_BYTESTREAM_T *VAR_2,
   size_t VAR_3, unsigned int *VAR_4, unsigned int *VAR_5,
   unsigned int *VAR_6, unsigned int *VAR_7,
   unsigned int *VAR_8, unsigned int *VAR_9)
{
   static const int VAR_10[16][2] =
   { {0, 0}, {24000, 1001}, {24, 1}, {25, 1}, {30000, 1001}, {30, 1}, {50, 1},
     {60000, 1001}, {60, 1},

     {15, 1001},
     {5, 1001}, {10, 1001}, {12, 1001}, {15, 1001} };
   static const int VAR_11[16][2] =
   { {0, 0}, {1, 1}, {4, 3}, {16, 9}, {221, 100} };

   VC_CONTAINER_STATUS_T VAR_12;
   unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
   int64_t VAR_17, VAR_18, VAR_19;
   uint8_t VAR_20[8];

   VAR_12 = FUNC_0( VAR_2, VAR_3, VAR_20, sizeof(VAR_20));
   if(VAR_12 != VAR_1)
      return VAR_12;

   VAR_13 = (VAR_20[4] << 4) | (VAR_20[5] >> 4);
   VAR_14 = ((VAR_20[5]&0x0f) << 8) | VAR_20[6];
   VAR_16 = VAR_20[7] >> 4;
   VAR_15 = VAR_20[7]&0x0f;
   if (!VAR_13 || !VAR_14 || !VAR_16 || !VAR_15)
      return VAR_0;

   *VAR_4 = VAR_13;
   *VAR_5 = VAR_14;
   *VAR_6 = VAR_10[VAR_15][0];
   *VAR_7 = VAR_10[VAR_15][1];
   VAR_17 = (int64_t)VAR_11[VAR_16][0] * VAR_14;
   VAR_18 = (int64_t)VAR_11[VAR_16][1] * VAR_13;
   VAR_19 = FUNC_1(VAR_17, VAR_18);
   if (VAR_19)
   {
      VAR_17 /= VAR_19;
      VAR_18 /= VAR_19;
   }
   *VAR_8 = VAR_17;
   *VAR_9 = VAR_18;

   return VAR_1;
}
