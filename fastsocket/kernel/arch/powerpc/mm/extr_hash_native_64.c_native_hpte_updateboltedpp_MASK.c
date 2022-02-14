
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {unsigned long r; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,int) ;
 struct hash_pte* VAR_2 ;
 long FUNC_2 (unsigned long,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned long,int,int,int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3, unsigned long VAR_4,
           int VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 long VAR_9;
 struct hash_pte *VAR_10;

 VAR_7 = FUNC_0(VAR_4, VAR_6);
 VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_6);

 VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_6);
 if (VAR_9 == -1)
  FUNC_3("could not find page to bolt\n");
 VAR_10 = VAR_2 + VAR_9;


 VAR_10->r = (VAR_10->r & ~(VAR_1 | VAR_0)) |
  (VAR_3 & (VAR_1 | VAR_0));


 FUNC_4(VAR_8, VAR_5, VAR_6, 0);
}
