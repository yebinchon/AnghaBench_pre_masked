
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef scalar_t__ uint ;
typedef scalar_t__ ms02nv_uint ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static inline uint FUNC_2(ulong VAR_6)
{
 ms02nv_uint *VAR_7;
 ms02nv_uint *VAR_8;
 uint VAR_9;
 uint VAR_10;
 size_t VAR_11;

 int VAR_12;





 VAR_7 = (ms02nv_uint *)(FUNC_0(VAR_6 + VAR_1));
 VAR_8 = (ms02nv_uint *)(FUNC_0(VAR_6 + VAR_5));
 VAR_12 = FUNC_1(VAR_10, VAR_8);
 if (VAR_12)
  return 0;
 if (VAR_10 != VAR_4)
  return 0;

 VAR_9 = *VAR_7;
 VAR_11 = (VAR_9 & VAR_2) << VAR_3;
 if (VAR_11 > VAR_0)
  VAR_11 = VAR_0;

 return VAR_11;
}
