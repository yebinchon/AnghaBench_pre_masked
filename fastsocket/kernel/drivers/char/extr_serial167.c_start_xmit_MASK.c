
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_char ;
struct cyclades_port {int line; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned char volatile VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(struct cyclades_port *VAR_4)
{
 unsigned long VAR_5;
 volatile unsigned char *VAR_6 = (u_char *) VAR_0;
 int VAR_7;

 VAR_7 = VAR_4->line;
 FUNC_1(VAR_5);
 VAR_6[VAR_1] = VAR_7;
 VAR_6[VAR_2] |= VAR_3;
 FUNC_0(VAR_5);
}
