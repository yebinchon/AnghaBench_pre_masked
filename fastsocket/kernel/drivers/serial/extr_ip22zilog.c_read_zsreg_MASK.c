
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int control; } ;


 int FUNC_0 () ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (unsigned char,int *) ;

__attribute__((used)) static unsigned char FUNC_3(struct zilog_channel *VAR_0,
    unsigned char VAR_1)
{
 unsigned char VAR_2;

 FUNC_2(VAR_1, &VAR_0->control);
 FUNC_0();
 VAR_2 = FUNC_1(&VAR_0->control);
 FUNC_0();

 return VAR_2;
}
