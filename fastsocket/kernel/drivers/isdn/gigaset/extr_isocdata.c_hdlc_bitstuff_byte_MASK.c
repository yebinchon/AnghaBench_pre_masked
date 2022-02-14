
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct isowbuf_t {int dummy; } ;


 int FUNC_0 (struct isowbuf_t*,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct isowbuf_t *VAR_1, unsigned char VAR_2,
         int VAR_3)
{
 u16 VAR_4;
 int VAR_5, VAR_6;






 VAR_4 = VAR_0[256 * VAR_3 + VAR_2];
 VAR_5 = (VAR_4 >> 13) & 3;
 VAR_6 = (VAR_4 >> 10) & 7;
 VAR_4 &= 0x3ff;


 FUNC_0(VAR_1, VAR_4, 8 + VAR_5);
 return VAR_6;
}
