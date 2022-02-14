
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct timespec *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 do {
  VAR_4 = ((FUNC_0(VAR_0) & 0xffff) << 16) |
   (FUNC_0(VAR_1) & 0xffff);

  VAR_5 = ((FUNC_0(VAR_0) & 0xffff) << 16) |
   (FUNC_0(VAR_1) & 0xffff);
 } while (VAR_4 != VAR_5);

 VAR_3->tv_sec = VAR_4 - VAR_2;


 VAR_3->tv_nsec = 0;
}
