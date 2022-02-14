
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcfb_par {unsigned char* cslut; int cio_addr; int dio_addr; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (unsigned char,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct arcfb_par *VAR_4,
    unsigned int VAR_5, unsigned char VAR_6)
{
 unsigned char VAR_7 = VAR_4->cslut[VAR_5];

 FUNC_0(VAR_7|VAR_0|VAR_2, VAR_4->cio_addr);
 FUNC_0(VAR_6, VAR_4->dio_addr);
 FUNC_1(VAR_3);
 FUNC_0(VAR_7|VAR_1|VAR_2, VAR_4->cio_addr);
}
