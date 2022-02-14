
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct itd1000_state {size_t* shadow; } ;


 int FUNC_0 (struct itd1000_state*,size_t,size_t*,int) ;

__attribute__((used)) static inline int FUNC_1(struct itd1000_state *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2, 1);
 VAR_0->shadow[VAR_1] = VAR_2;
 return VAR_3;
}
