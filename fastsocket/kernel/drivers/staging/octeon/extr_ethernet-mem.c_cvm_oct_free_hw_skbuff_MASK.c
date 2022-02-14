__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 char *VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3) {
   struct sk_buff *VAR_4 =
       *(struct sk_buff **)(VAR_3 - sizeof(void *));
   VAR_2--;
   FUNC_0(VAR_4);
  }
 } while (VAR_3);

 if (VAR_2 < 0)
  FUNC_0("Freeing of pool %u had too many skbuffs (%d)\n",
       VAR_0, VAR_2);
 else if (VAR_2 > 0)
  FUNC_0("Freeing of pool %u is missing %d skbuffs\n",
         VAR_0, VAR_2);
}
