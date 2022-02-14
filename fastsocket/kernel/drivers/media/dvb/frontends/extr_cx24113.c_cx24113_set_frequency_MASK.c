
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx24113_state {scalar_t__ vcodiv; int refdiv; int frequency; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cx24113_state*,int*,int *) ;
 int FUNC_1 (struct cx24113_state*,int) ;
 int FUNC_2 (struct cx24113_state*,int,int ,int ) ;
 int FUNC_3 (struct cx24113_state*,int,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct cx24113_state *VAR_1, u32 VAR_2)
{
 u8 VAR_3 = 1;
 u16 VAR_4 = 6;
 s32 VAR_5 = 0;

 VAR_3 = FUNC_1(VAR_1, 0x14);
 FUNC_3(VAR_1, 0x14, VAR_3 & 0x3f);

 VAR_3 = FUNC_1(VAR_1, 0x10);
 FUNC_3(VAR_1, 0x10, VAR_3 & 0xbf);

 VAR_1->frequency = VAR_2;

 FUNC_4("tuning to frequency: %d\n", VAR_2);

 FUNC_0(VAR_1, &VAR_4, &VAR_5);
 FUNC_2(VAR_1, VAR_4, VAR_5, VAR_1->refdiv);

 VAR_3 = FUNC_1(VAR_1, 0x18) & 0xbf;
 if (VAR_1->vcodiv != VAR_0)
  VAR_3 |= 1 << 6;
 FUNC_3(VAR_1, 0x18, VAR_3);


 FUNC_5(5);

 VAR_3 = FUNC_1(VAR_1, 0x1c) & 0xef;
 FUNC_3(VAR_1, 0x1c, VAR_3 | (1 << 4));
 return 0;
}
