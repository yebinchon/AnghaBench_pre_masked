__attribute__((used)) static void FUNC_0(unsigned char VAR_0)
{
  volatile unsigned long* VAR_1 = (volatile unsigned long*)0xCC006800;
  unsigned long VAR_2,VAR_3;
  VAR_3=0xc0000000;
  VAR_2 = VAR_0 << 24;
  VAR_1[0] = ((((VAR_1[0]) & 0x405) | 256) | 48);

  VAR_1[0 * 5 + 4] = VAR_3;
  VAR_1[0 * 5 + 3] = ((4 - 1) << 4) | (1 << 2) | 1;
  while (VAR_1[0 * 5 + 3] & 1);

  VAR_1[0 * 5 + 4] = VAR_2;
  VAR_1[0 * 5 + 3] = ((4 - 1) << 4) | (1 << 2) | 1;
  while (VAR_1[0 * 5 + 3] & 1);
  VAR_1[0] &= 0x405;
}
