
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct efx_nic {int dummy; } ;
struct efx_memcpy_req {unsigned int to_rid; int to_addr; unsigned int from_rid; int from_addr; unsigned int length; int * from_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ,unsigned int) ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct efx_nic*,int ,int *,unsigned int,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (unsigned int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct efx_nic *VAR_15, struct efx_memcpy_req *VAR_16,
       unsigned int VAR_17)
{
 u8 *VAR_18, *VAR_19;
 unsigned int VAR_20;
 u32 VAR_21, VAR_22, VAR_23;
 int VAR_24;

 FUNC_6();

 VAR_20 = FUNC_1(VAR_17);
 if (FUNC_2(VAR_20 > VAR_3))
  return -VAR_0;


 VAR_18 = FUNC_5(VAR_3, VAR_2);
 if (VAR_18 == ((void*)0))
  return -VAR_1;

 VAR_19 = VAR_18;
 FUNC_0(VAR_19, VAR_7, VAR_17);
 while (VAR_17-- > 0) {
  FUNC_0(VAR_19, VAR_14,
          VAR_16->to_rid);
  FUNC_0(VAR_19, VAR_13,
          (u32)VAR_16->to_addr);
  FUNC_0(VAR_19, VAR_12,
          (u32)(VAR_16->to_addr >> 32));
  if (VAR_16->from_buf == ((void*)0)) {
   VAR_21 = VAR_16->from_rid;
   VAR_23 = (u32)VAR_16->from_addr;
   VAR_22 = (u32)(VAR_16->from_addr >> 32);
  } else {
   if (FUNC_2(VAR_20 + VAR_16->length > VAR_3)) {
    VAR_24 = -VAR_0;
    goto out;
   }

   VAR_21 = VAR_6;
   VAR_23 = VAR_20;
   VAR_22 = 0;
   FUNC_7(VAR_18 + VAR_20, VAR_16->from_buf, VAR_16->length);
   VAR_20 += VAR_16->length;
  }

  FUNC_0(VAR_19, VAR_10, VAR_21);
  FUNC_0(VAR_19, VAR_9,
          VAR_23);
  FUNC_0(VAR_19, VAR_8,
          VAR_22);
  FUNC_0(VAR_19, VAR_11,
          VAR_16->length);

  ++VAR_16;
  VAR_19 += VAR_5;
 }

 VAR_24 = FUNC_3(VAR_15, VAR_4, VAR_18, VAR_20, ((void*)0), 0, ((void*)0));
out:
 FUNC_4(VAR_18);

 FUNC_6();

 return VAR_24;
}
