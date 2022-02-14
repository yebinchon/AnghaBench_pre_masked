
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned long,int,int,int,int,int,int,int) ;
 int VAR_6 ;
 size_t VAR_7 ;
 unsigned long FUNC_1 (int) ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int ** VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (void)
{
 unsigned long VAR_14;

 VAR_13[0] = FUNC_2(VAR_0);
 if (!VAR_13[0])
  FUNC_4("failed to allocate ia32_shared_page[0]\n");

 VAR_12 = FUNC_3(VAR_13[0]);
 VAR_11[0] = VAR_12;


 VAR_12[VAR_9 >> 3]
  = FUNC_0(0, (VAR_1-1) >> VAR_5,
          0xb, 1, 3, 1, 1, 1, 1);


 VAR_12[VAR_10 >> 3]
  = FUNC_0(0, (VAR_1-1) >> VAR_5,
          0x3, 1, 3, 1, 1, 1, 1);

 VAR_14 = FUNC_1(VAR_2*VAR_3);
 VAR_12[VAR_8] = FUNC_0(VAR_6, 235,
             0xb, 0, 3, 1, 1, 1, 0);
 VAR_12[VAR_7] = FUNC_0(VAR_4, VAR_14 - 1,
             0x2, 0, 3, 1, 1, 1, 0);
}
