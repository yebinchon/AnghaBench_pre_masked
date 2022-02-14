
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_more_immediate {void** q; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct output_more_immediate *VAR_1,
           unsigned char VAR_2,
           unsigned char VAR_3,
           unsigned char VAR_4,
           unsigned int VAR_5)
{
 VAR_1->q[0] = FUNC_0(0x02000000 | 8);
 VAR_1->q[1] = FUNC_0(0);
 VAR_1->q[2] = FUNC_0(0);
 VAR_1->q[3] = FUNC_0(0);


 VAR_1->q[4] = FUNC_0( (0x0 << 16)
      | (VAR_2 << 14)
      | (VAR_3 << 8)
      | (VAR_0 << 4)
      | (VAR_4) );


 VAR_1->q[5] = FUNC_0((VAR_5 << 16) | (0x7F << 8) | 0xA0);

 VAR_1->q[6] = FUNC_0(0);
 VAR_1->q[7] = FUNC_0(0);
}
