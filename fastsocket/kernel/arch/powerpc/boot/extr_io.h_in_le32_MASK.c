__attribute__((used)) static inline unsigned FUNC_0(const volatile unsigned *VAR_0)
{
 unsigned VAR_1;

 __asm__ __volatile__("lwbrx %0,0,%1; twi 0,%0,0; isync"
        : "=r" (VAR_1) : "r" (VAR_0), "m" (*VAR_0));
 return VAR_1;
}
