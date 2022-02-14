
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char* FUNC_0(int VAR_0)
{
    const char *VAR_1;

    switch (VAR_0 & 0xff)
    {
        case 152:
            VAR_1 = "close notify";
            break;
        case 147:
            VAR_1 = "unexpected_message";
            break;
        case 156:
            VAR_1 = "bad record mac";
            break;
        case 151:
            VAR_1 = "decompression failure";
            break;
        case 150:
            VAR_1 = "handshake failure";
            break;
        case 148:
            VAR_1 = "no certificate";
            break;
        case 157:
            VAR_1 = "bad certificate";
            break;
        case 146:
            VAR_1 = "unsupported certificate";
            break;
        case 154:
            VAR_1 = "certificate revoked";
            break;
        case 155:
            VAR_1 = "certificate expired";
            break;
        case 153:
            VAR_1 = "certificate unknown";
            break;
        case 149:
            VAR_1 = "illegal parameter";
            break;
        case 140:
            VAR_1 = "decryption failed";
            break;
        case 133:
            VAR_1 = "record overflow";
            break;
        case 132:
            VAR_1 = "unknown CA";
            break;
        case 145:
            VAR_1 = "access denied";
            break;
        case 141:
            VAR_1 = "decode error";
            break;
        case 139:
            VAR_1 = "decrypt error";
            break;
        case 138:
            VAR_1 = "export restriction";
            break;
        case 134:
            VAR_1 = "protocol version";
            break;
        case 137:
            VAR_1 = "insufficient security";
            break;
        case 136:
            VAR_1 = "internal error";
            break;
        case 128:
            VAR_1 = "user canceled";
            break;
        case 135:
            VAR_1 = "no renegotiation";
            break;
        case 129:
            VAR_1 = "unsupported extension";
            break;
        case 142:
            VAR_1 = "certificate unobtainable";
            break;
        case 130:
            VAR_1 = "unrecognized name";
            break;
        case 143:
            VAR_1 = "bad certificate status response";
            break;
        case 144:
            VAR_1 = "bad certificate hash value";
            break;
        case 131:
            VAR_1 = "unknown PSK identity";
            break;
        default:
            VAR_1 = "unknown";
            break;
    }

    return VAR_1;
}
