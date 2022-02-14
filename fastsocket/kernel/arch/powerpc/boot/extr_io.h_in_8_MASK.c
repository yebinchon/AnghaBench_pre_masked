__attribute__((used)) static inline int FUNC_0(const volatile unsigned char *VAR_0)
{
 int VAR_1;

 __asm__ __volatile__("lbz%U1%X1 %0,%1; twi 0,%0,0; isync"
        : "=r" (VAR_1) : "m" (*VAR_0));
 return VAR_1;
}
